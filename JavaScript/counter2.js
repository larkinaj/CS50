    let counter = 0;
    function count() {
        counter = counter + 1;
        document.querySelector('h1').innerHTML = counter ;
    }
    
document.addEventListener('DOMContentLoaded', function(){
    document.querySelector('button').onclick = count;

    setInterval(count, 1000);
});