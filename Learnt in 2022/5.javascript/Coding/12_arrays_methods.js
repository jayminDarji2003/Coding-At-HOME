// Let's see all the methods of an array
/*
    1.toString()
    2.join()
    3.pop()
    4.push()
    5.shift()
    6.unshift()
    7.delete
    8.concat()
    9.sort()
    10.reverse()
    11.splice()
    12.slice()
*/


const num = [11, 22, 33, 44, 55];

// 1.toString()
// console.log(num.toString());

/*  --> understand this method

console.log(num);   -->will give an number

let n = 10;     -->make new variable
console.log(n); --> you can see on terminal this will give you 10 in number and same color as array number has.

let str = "string";
console.log(str)    --> This will give you string and the color is same as the method toString has.
*/

//  2.join()
/*
console.log(num.join("-")); //-->join with "-"
console.log(num.join("_")); //-->join with "_"
console.log(num.join("+")); //-->join with "+"
console.log(num.join("=")); //-->join with "="
console.log(num.join("*")); //-->join with "*"
*/

//  3.pop()
/*
console.log(num.pop());
console.log(num)
*/

//  4.push()
// console.log(num.push(99));  //-->returns new array length
// console.log(num)

//  5.shift()
// console.log(num.shift())
// console.log(num)

// 6.unshift()
// console.log(num.unshift(1111))
// console.log(num);

//  7.delete
// delete num[1];
// console.log(num)

// 8.concate()
// let num1 = [10,20,30,40,50]
// let num2 = [100,200,300,400,500]
// let num3 = [1,2,3,4,5]
// let newArray = num1.concat(num2,num3,num)
// console.log(newArray)


//9.  sort()    -->This methods sort alphabatically.
/*
let arr = [9999,188,541,84,202,161,110,76];
// arr.sort();  -->sort using string
// console.log(arr);
// Note:-Above sort method sort the array alphabatically
//If we want to sort array ascending order so if give a function

const compare = (a,b) => {
    //return a - b;   //---> to sort ascending order
    return b - a;   //---> to sort discending order
}
arr.sort(compare);
console.log(arr)
*/


//10. reverse() -->this method reverses the array
// let arr = [10,20,30,40,50,60];
// console.log(arr.reverse());



/*
11. splice()  ---> This method is used to add new element in the array.In "splice" there are three arguments...In the end returns the deleted element.

    splice(whereToStart,deleteElement,elementWhichIsInsert);
    // let arr = [10,20,30,40,50,60];
    // let newArray = arr.splice(3,3,99999,88888,77777);
// console.log(arr) 

// 12. slice()
let arr = [10,20,30,40,50,60];

// let newArray = arr.slice(2);    //--> slice in the end of the array
let newArray = arr.slice(2,4);    //--> slice between 2 and 4
console.log(newArray)

*/


