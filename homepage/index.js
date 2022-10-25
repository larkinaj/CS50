document.getElementsByClassName("card1").onclick = function () {
    console.log("it clicked!")
    window.location.href = "~/china.html";
};

document.getElementsByClassName("card1").addEventListener('click', function() {
    console.log("it clicked!")
    window.location.href = "~/china.html";
});
console.log("test")