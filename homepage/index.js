
const locationButtons = function(location) {
    window.location.href = location + ".html"
};

const getInnerText = function(element) {
    return element.innerText
}

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
    locationButtons("index");
};

document.getElementsByClassName("nav-link")[1].onclick = function () {
    locationButtons("china");
};

document.getElementsByClassName("nav-link")[2].onclick = function () {
    locationButtons("india");
};

document.getElementsByClassName("nav-link")[3].onclick = function () {
    locationButtons("japan");
};

document.getElementsByClassName("nav-link")[4].onclick = function () {
    locationButtons("italy");
};

console.log(document.getElementsByClassName("nav-link")[0].innerText.toLowerCase())
console.log(document.getElementsByClassName("nav-link"))