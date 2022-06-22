    if (!localStorage.getItem('counter')) {
        localStorage.setItem('counter', 0);
    }


    function count() {
        let counter = localStorage.getItem('counter');
        counter = counter + 1;
        document.querySelector('h1').innerHTML = counter ;
        localStorage.setItem('counter', counter);
    }

document.addEventListener('DOMContentLoaded', function(){
    document.querySelector('button').onclick = count;

    // setInterval(count, 1000);
});