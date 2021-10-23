// CRAWLER

let str = `hackthebox`;//Give any name in place of python related to which you want to search. 
let links = document.links;
console.log(links);
Array.from(links).forEach(function(element){
    href = element.href;
    if (href.includes(str)) {
        console.log(href);
    }

});