var panel = document.getElementsByClassName("panel");

var len = document.querySelector(".panel_box").childElementCount;

panel[0].style.zIndex = "1";
panel[1].style.zIndex = "0";
panel[2].style.zIndex = "0";
panel[3].style.zIndex = "0";
panel[0].style.opacity = "1";
panel[1].style.opacity = "0";
panel[2].style.opacity = "0";
panel[3].style.opacity = "0";
panel[0].style.display = "block";
panel[1].style.display = "none";
panel[2].style.display = "none";
panel[3].style.display = "none";




