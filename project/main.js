
const random = Math.floor(Math.random() * 10);
const picArr = ['src/quote1.jpg', 'src/quote2.jpg', 'src/quote3.png', 'src/quote4.jpg', 'src/quote5.jpg', 'src/quote6.jpg', 'src/quote7.jpg', 'src/quote8.jpg', 'src/quote9.jpg', 'src/quote10.jpg'];
var picsrc = picArr[random];
var image = new Image();
image.src = chrome.runtime.getURL(picsrc);
image.style.width = "min-content";
image.style.height = "600px";
image.style.maxWidth = "600px";
image.style.marginTop= "20px";


let urlName = window.location.hostname
let texty = document.createTextNode(urlName + " can be fun but don't get too distracted");

if (urlName.includes('youtube')) {
    window.addEventListener('load', function () {
        const offButton = document.createElement('button');
        const contentsVar = document.getElementById("contents");
        const newDiv = document.createElement('div');
        const contentsPar = contentsVar.parentNode;
        
        contentsVar.parentNode.removeChild(contentsVar);
        
        contentsPar.style.color = "red";
        contentsPar.style.fontSize = "30px";
        newDiv.style.display = 'flex';
        newDiv.style.flexDirection = "column";
        newDiv.style.justifyContent = "center";
        newDiv.style.alignItems = "center";
        newDiv.style.marginTop= "20px";
        offButton.style.width = "200px";
        offButton.style.height= "50px";
        offButton.style.margin= "20px";
        offButton.innerHTML= "Click Here To Turn Off";
        contentsPar.appendChild(newDiv);
        newDiv.appendChild(texty);
        newDiv.appendChild(image);
        newDiv.appendChild(offButton);

        offButton.addEventListener('click', function () {
            contentsPar.removeChild(newDiv);
            contentsPar.appendChild(contentsVar);
        });
    });
}

if (urlName.includes('twitter')) {
    window.addEventListener('load', (event) => {
        const sidebar = document.querySelector('[data-test-id=sidebarColumn]');
        const contentsVar = document.getElementsByTagName("main")[0];
        const newDiv = document.createElement('div');
        const offButton = document.createElement('button');
        const contentsPar = contentsVar.parentNode;
        
        contentsPar.removeChild(contentsVar);
        
        newDiv.style.display = 'flex';
        newDiv.style.flexDirection = "column";
        newDiv.style.justifyContent = "center";
        newDiv.style.alignItems = "center";
        newDiv.style.marginTop= "20px";
        offButton.style.width = "200px";
        offButton.style.height= "50px";
        offButton.style.margin= "20px";
        offButton.innerHTML= "Click Here To Turn Off";
        contentsPar.style.color = "red";
        contentsPar.style.fontSize = "30px";
        image.style.height = "620px";

        contentsPar.appendChild(newDiv);
        newDiv.appendChild(texty);
        newDiv.appendChild(image);
        newDiv.appendChild(offButton);

        offButton.addEventListener('click', function () {
            contentsPar.removeChild(newDiv);
            contentsPar.appendChild(contentsVar);
        });
    });
}


if (urlName.includes('instagram')) {
    window.addEventListener('load', function () {
        const contentsVar = document.getElementsByTagName("main")[0];
        const newDiv = document.createElement('div');
        const offButton = document.createElement('button');
        const contentsPar = contentsVar.parentNode;
        
        contentsVar.parentNode.removeChild(contentsVar);
        
        newDiv.style.display = 'flex';
        newDiv.style.flexDirection = "column";
        newDiv.style.justifyContent = "center";
        newDiv.style.alignItems = "center";
        newDiv.style.marginTop= "20px";
        offButton.style.width = "200px";
        offButton.style.height= "50px";
        offButton.style.margin= "20px";
        offButton.innerHTML= "Click Here To Turn Off";
        contentsPar.style.color = "red";
        contentsPar.style.fontSize = "30px";
        image.style.height = "620px";
        image.style.margin = "10px";

        contentsPar.appendChild(newDiv);
        newDiv.appendChild(texty);
        newDiv.appendChild(image);
        newDiv.appendChild(offButton);

        offButton.addEventListener('click', function () {
            contentsPar.removeChild(newDiv);
            contentsPar.appendChild(contentsVar);
        });
    });
}

if (urlName.includes('facebook')) {
    window.addEventListener('load', function () {
        const contentsVar = document.querySelector('[role="main"]');
        const chatbar = document.querySelector('[role="complementary"]');
        const newDiv = document.createElement('div');
        const offButton = document.createElement('button');
        const contentsPar = contentsVar.parentNode;
        
        contentsVar.parentNode.removeChild(contentsVar);
        chatbar.parentNode.removeChild(chatbar);
        
        newDiv.style.display = 'flex';
        newDiv.style.flexDirection = "column";
        newDiv.style.justifyContent = "center";
        newDiv.style.alignItems = "center";
        newDiv.style.marginTop= "20px";
        offButton.style.width = "200px";
        offButton.style.height= "50px";
        offButton.style.margin= "20px";
        offButton.innerHTML= "Click Here To Turn Off";
        contentsPar.style.color = "red";
        contentsPar.style.fontSize = "30px";
        image.style.height = "620px";

        contentsPar.appendChild(newDiv);
        newDiv.appendChild(texty);
        newDiv.appendChild(image);
        newDiv.appendChild(offButton);

        offButton.addEventListener('click', function () {
            contentsPar.removeChild(newDiv);
            contentsPar.appendChild(contentsVar);
        });
    });
}

if (urlName.includes('twitch')) {
    window.addEventListener('load', function () {
        const contentsVar = document.getElementsByTagName("main")[0];
        const newDiv = document.createElement('div');
        const offButton = document.createElement('button');
        const contentsPar = contentsVar.parentNode;
        
        contentsVar.parentNode.removeChild(contentsVar);
        
        newDiv.style.display = 'flex';
        newDiv.style.flexDirection = "column";
        newDiv.style.justifyContent = "center";
        newDiv.style.alignItems = "center";
        newDiv.style.marginTop= "20px";
        newDiv.style.marginLeft= "100px";
        offButton.style.width = "200px";
        offButton.style.height= "50px";
        offButton.style.margin= "20px";
        offButton.innerHTML= "Click Here To Turn Off";
        contentsPar.style.color = "red";
        contentsPar.style.fontSize = "30px";
        image.style.height = "620px";

        contentsPar.appendChild(newDiv);
        newDiv.appendChild(texty);
        newDiv.appendChild(image);
        newDiv.appendChild(offButton);

        offButton.addEventListener('click', function () {
            contentsPar.removeChild(newDiv);
            contentsPar.appendChild(contentsVar);
        });
    });
}

