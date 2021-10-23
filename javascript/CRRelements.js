let element = document.createElement('li');
let text = document.createTextNode(`I am a textnode`);
element.appendChild(text);

// add a class name to the li element.

element.className = `childli`;
element.id = `createdli`;
element.setAttribute(`title`,`mytitle`);
element.innerText = `<b>Hello this created by phoenix</b>`;
element.innerHTML = `<b> Hello this created by phoenix </b>`;

let ul = document.querySelector(`ul.this`);
ul.appendChild(element);
console.log(ul);
console.log(element);
