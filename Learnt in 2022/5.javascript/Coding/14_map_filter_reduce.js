// Map , Filter and reduce in javaScript

// 1.map() ==> Creates a new array by performing some operation on each array element.
// In short map makes a new array from an existing array.And forEach perform an operation on array.
/*
we can give three arguments --> value , index , array.
    //only value
const arr = [10, 20, 30, 40, 50];
let a = arr.map((value) => {
    console.log(value);
    return value;
});
console.log(a);

//value with index
const arr = [10, 20, 30, 40, 50];
let a = arr.map((value,index) => {
    console.log(value,index);
    return value;
});
console.log(a);

//value , index and array

const arr1 = [10, 20, 30, 40, 50];
let a1 = arr.map((value,index,array) => {
    console.log(value,index,array);
    return value;
});
console.log(a);

*/

// filter():- This method is used to return a element which is setisfy some condition.
/*
const arr = [10,20,30,40,6,,3,9];
let a = arr.filter((a)=>{
    return a < 10;
    // return a > 10;
    // return a <= 10;
    // return a => 10;
    // return a == 10;
    // return a != 10;
})
console.log(a)
*/

//  reduce() :- This method returns the sum of the array

// const arr = [1,2,3,4,5,6,6,7,8];
// let sum = arr.reduce((n1,n2)=>{
//     return (n1 + n2);
// });
// console.log(sum);