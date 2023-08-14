// All about function in javaScript

// Normal function
// syntax
/*
    function functionName(aguments){
        //codes
    }
*/

// Arrow function
// syntax
/*
   const functionName = (arguments) =>{
        //code
   }
*/
    

    //Normal function
// function average(a, b) {
//     return (a + b) / 2;
// }

    // Arrow function
const average = (a, b) => {
    return  ((a + b)/2);
}

let x = 20;
let y = 10;
let z = 30;

console.log("The average of x and y is : " + average(x, y));
console.log("The average of x and z is : " + average(x, z));
console.log("The average of y and z is : " + average(y, z));