
const locationButtons = function(location) {
    window.location.href = location + ".html"
};

const getInnerText = function(element) {
    return element.innerText
}

china = document.getElementsByClassName("card1")[0];

document.getElementsByClassName("card1")[0].onclick = function () {
    locationButtons("china");
};

document.getElementsByClassName("card2")[0].onclick = function () {
    window.location.href = "india.html";
};

document.getElementsByClassName("card3")[0].onclick = function () {
    window.location.href = "japan.html";
};

document.getElementsByClassName("card4")[0].onclick = function () {
    window.location.href = "italy.html";
};

document.getElementsByClassName("nav-link")[0].onclick = function () {
    locationButtons("china");
};
console.log(document.getElementsByClassName("nav-link")[0].innerText.toLowerCase())
console.log(document.getElementsByClassName("nav-link"))