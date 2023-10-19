const leftKey = "ArrowLeft";
const rightKey = "ArrowRight";
const upKey = "ArrowUp";
const downKey = "ArrowDown";

let buttonCount = 0;
let buttonLength = 0;
let currentIndex = -1;

function buttonSelection(event, selector) {
  const blueButtons = Array.from(document.querySelectorAll(selector));
  if (blueButtons.length > 1) {
    if (
      event.ctrlKey &&
      (event.key === "ArrowLeft" || event.key === "ArrowRight")
    ) {
      event.preventDefault();

      if (event.key === "ArrowLeft") {
        currentIndex = Math.max(0, currentIndex - 1);
      } else {
        currentIndex = Math.min(blueButtons.length - 1, currentIndex + 1);
      }
      blueButtons.forEach(
        (button) =>
          (button.style.transition = "background-color 200ms ease-in-out 0s")
      );
      blueButtons.forEach((button, index) => {
        if (index === currentIndex) {
          button.style.backgroundColor = "green";
          button.focus();
          button.scrollIntoView({ behavior: "smooth", block: "center" });

          if (button.tagName === "BUTTON") {
            button.style.outline = "none";
            button.style.border = "none";
            button.style.color = "white";
          }
        } else {
          // button.style.transition = "background-color 150ms ease-in-out 0s";

          if (button.tagName === "BUTTON") {
            button.style.color = "black";
            button.style.backgroundColor = "#90CAF9";
          } else {
            button.style.backgroundColor = "#2185d0";
          }
        }
      });
    } else if (event.ctrlKey && event.key === "Enter") {
      event.preventDefault();

      if (currentIndex >= 0 && currentIndex < blueButtons.length) {
        blueButtons[currentIndex].click();
      }
    }
  }
  return;
}

const globalKeyBoardListener = document.addEventListener(
  "keydown",
  function (event) {
    if (location.href.includes("trackshome.xhtml")) {
      buttonSelection(event, "a.ui.blue.button");
    } else if (location.href.includes("codeprogramgroup")) {
      buttonSelection(event, 'button[type="submit"]');
    } else if (location.href.includes("program.xhtml")) {
      buttonSelection(event, "button[type='submit']");

      if (event.altKey && (event.key === "c" || event.key === "C")) {
        console.log("Triggered");
        const captchaInput = document.getElementById("capval");
        const proceedButton = document.getElementById("proceedbtn");
        const evaluationDiv = document.createElement("div");
        const evaluteInput = document.createElement("input");

        {
          evaluationDiv.classList.add("evaluate-captcha");
          evaluationDiv.style.cssText =
            "padding: 0.5rem 0.3rem; background-color: #e8e8e8; position: absolute; top: -5rem; border-radius: 6px; box-sizing: border-box;";
          evaluteInput.classList.add("evaluate-captcha--input");
          evaluteInput.setAttribute("placeholder", "Type the expression here");
          evaluteInput.style.cssText =
            "outline: none; border: none; padding: 10px 5px;";
          evaluationDiv.appendChild(evaluteInput);
          captchaInput.parentElement.style.position = "relative";
          captchaInput.insertAdjacentElement("beforeBegin", evaluationDiv);
          evaluteInput.focus();
        }

        evaluteInput.onkeydown = function (e) {
          if (e.key === "Enter" && e.altKey) {
            const expressionList = evaluteInput.value.split("+");
            const sum = expressionList
              .map((e) => Number(e))
              .reduce((a, b) => a + b, 0);
            console.log(sum);
            captchaInput.setAttribute("value", `${sum}`);
            proceedButton.click();
          }
        };
      }
    }
  }
);
