randomNum = Math.floor(Math.random() * 4) + 1;

if (window.location.pathname === "/index.html") {
    document.getElementsByClassName("card1")[0].onclick = function () {
        window.location.href = "china.html";
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
    document.getElementsByClassName("random")[0].onclick = function () {
        console.log("card" + randomNum)
        document.getElementsByClassName("card" + randomNum).click();
    };
}

document.getElementsByClassName("nav-link")[0].onclick = function () {
    window.location.href = "index.html";
};

document.getElementsByClassName("nav-link")[1].onclick = function () {
    window.location.href = "china.html";
};

document.getElementsByClassName("nav-link")[2].onclick = function () {
    window.location.href = "india.html";
};

document.getElementsByClassName("nav-link")[3].onclick = function () {
    window.location.href = "japan.html";
};

document.getElementsByClassName("nav-link")[4].onclick = function () {
    window.location.href = "italy.html";
};

