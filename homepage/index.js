
test = document.getElementsByClassName("card1")[0]
test1 = document.getElementsByClassName("card1")


document.getElementsByClassName("card1")[0].onclick = function () {
    console.log("it clicked!")
    window.location.href = "china.html";
};

document.getElementsByClassName("card2")[0].onclick = function () {
    console.log("it clicked!")
    window.location.href = "india.html";
};

document.getElementsByClassName("card3")[0].onclick = function () {
    console.log("it clicked!")
    window.location.href = "japan.html";
};

document.getElementsByClassName("card4")[0].onclick = function () {
    console.log("it clicked!")
    window.location.href = "italy.html";
};

console.log(test)
console.log(test1)