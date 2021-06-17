var currentIndex = 0;
var id;
var len = document.querySelector('.carousel').childElementCount;
function carousel(index){
    if (currentIndex === len){
        currentIndex = index = 0;
    }
    if (currentIndex < 0){
        currentIndex = index = 4;
    }
    document.querySelector('.current').className = '';
    document.querySelector('.circle li:nth-child(' + (index + 1) + ')').className = 'current';
    document.querySelector('.selection').className = '';
    document.querySelector('.carousel li:nth-child(' + (index + 1) + ')').className = 'selection';
}
function prev(){
    currentIndex--;
    carousel(currentIndex)
}
function next(){
    currentIndex++;
    carousel(currentIndex)
}
var lis = document.querySelectorAll('.circle li');
for (var i = 0; i < lis.length; i++){
    lis[i].index = i;
    lis[i].onclick = function(){
        currentIndex = this.index
        carousel(currentIndex);
    }
    var showClothTimer;
    lis[i].onmouseover = function(){
        var temp = this.index
        showClothTimer = setTimeout(function(){
            currentIndex = temp
            carousel(currentIndex);
	    },500);
    }
    lis[i].addEventListener( 'mouseout', function() {
        clearTimeout(showClothTimer);
    }, false);
}
function auto() {
    id = setInterval(next, 2000)
}
function stop() {
    clearInterval(id)
}
auto();
document.querySelector('.prev').onclick = prev
document.querySelector('.next').onclick = next
document.querySelector('.middle_layout').onmouseover = stop
document.querySelector('.middle_layout').onmouseout = auto
