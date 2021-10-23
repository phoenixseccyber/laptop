// DO WITH index2.hmtl(runlive server).
// Element selector.
// 1.Single Element selector.
// 2.multi Element selector.

// Single element selector.

let element = document.getElementById(`myfirst`);
// element = element.className;
// element = element.childNodes;
element = element.parentNode;
console.log(element);
element.style.color = `blue`;
// element.innerText = `phoenix is a cool hacker`;
// element.innerHTML = `<b> phoenix is very cool security company</b>`;
console.log(element.innerText);
let sel = document.querySelector(`#myfirst`);
// sel = document.querySelector(`.child`);
// sel = document.querySelector(`b`);
console.log(sel);

// multi element selector
let elems = document.getElementsByClassName(`child`);
elems = document.getElementsByClassName(`container`);
console.log(elems[0].getElementsByClassName(`child`));
elems = document.getElementsByTagName(`div`);
console.log(elems);

Array.from(elems).forEach(element =>{//what does this => sign does search
    console.log(element);
    element.style.color = `green`;
});

// children parents and traversing in dom

let cont = document.querySelector('.no');

cont = document.querySelector('.container');

console.log(cont.anynodes);// this count the comment
console.log(cont.children);//this doesn't count the comment

// below ones are deprecated
// let nodeType = cont.childNodes[1].nodeType;

// console.log(nodeName);
// console.log(nodeType);
// above ones are deprecated


// Nodes Types

// 1= Element.
// 2= Attribute.
// 3= Text Node.
// 8= Comment.
// 9= document.
// 10= docType.

let container = document.querySelector('div.container');
// console.log(container.children[1].children[0].children);may be deprecated
console.log(container.firstChild);
console.log(container.firstElementChild);
console.log(container.lastChild);
console.log(container.lastElementChild);
console.log(container.childElementCount);//count of child element
// console.log(container.firstElementChild.parentNode);
console.log(container.firstElementChild.nextSibling);
console.log(container.firstElementChild.nextElementSibling);
console.log(container.firstElementChild.nextElementSibling.nextElementSibling);
