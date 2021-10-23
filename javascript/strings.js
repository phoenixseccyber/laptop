const name = `Harry`;
const greeting = `good morning`;
console.log(greeting + ' '+ name);

let html;

html = "<h1> This is a heading </h1>" +
        "<p> This is a para </p>";
// or
html = html.concat(`this`+' '+`str2`);
console.log(html);

// function of strings

console.log(html.length);
console.log(html.toLowerCase());
console.log(html.toUpperCase());
console.log(html[0]);
console.log(html.indexOf(`this`));
console.log(html.lastIndexOf('<'));
console.log(html.charAt(5));
console.log(html.endsWith(`str2`));
console.log(html.includes(`str2`));
console.log(html.substring(1,3));
console.log(html.slice(-4));
console.log(html.split(`>`));
console.log(html.replace(`this`,`it`));

// Template litrals

let fruit1 = `orange`;
let fruit2 = `apple`;
let myhtml = `Hello ${name}
              <h1> This is heading </h1>
              <p> You like  ${fruit1} and ${fruit2}</p>`;              
document.body.innerHTML = myhtml;              

