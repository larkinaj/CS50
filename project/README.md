# Focus Mode Chrome Extension


#### Video Demo:  https://youtu.be/ul_VOX_D4X0


#### Description:
Stop procrastination with this Chrome Extension! Focus mode is a chrome extension that uses JavaScript, HTML and CSS.
What Focus Mode does is it tries to limit the amount of time you spend on distracting websites such as Youtube, Instagram, Facebook, Twitch, and Twitter.
If you visit any of these sites with Focus Mode enabled, the extension will remove the main contents of the page and replace it with a motivational quote and a message reminding you to not get distracted. There will also be a button that you can press to restore the website to it's original state. The reason I came up with this idea is becasuse I would find myself procrastinating on schoolwork or studying and I wasnted to find a solution to help me focus on the tasks that I need to complete.

The extension is comprised of a main.js file, a manifest.json file, a popup.html file, a styles.css file and a folder with multiplte image files.
The manifest.file uses JSON format to describe the important information about the extension.
The main.js file is the main file that removes the elements from website and replaces those elements with the message, image, and button. In order to do this went to each website and I found the CSS ID name of the elements I want to remove. I then used document.getElementById to select these elements. i then used .parentNode.removeChild to remove these elements. After that, document.createElement is used to create the new elements that I want to replace and then .appendChild is used to append the new elements to the DOM. The new elements that are created are an image for the motivational quote, a span for the message reminder, and a div to hold the image and span. An .addEventListener is then used to check if the button is clicked. If the button is clicked, then the website will revert the changes made and re-append the original elements to the DOM.
The popup.html file contains the html for the small popup window that appears if you click the extension icon.
The styles.css file contains the CSS for popup.html.
The src folder contains the image files for all the motivation quote images (10 in total).