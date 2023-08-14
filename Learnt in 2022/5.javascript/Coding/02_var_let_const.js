console.log("Let , var and const in javaScript");

        //The var is not used much in javaScript
            // -> var is a globle scope variable which value change in the runtime
    var a = 10
    var b = "jaymin"
    console.log(a)
    console.log(b)

        // Most of the cases the let is used in javaScript
            // -> let is block scope variable which value change in the runtime
    let c = null
    let d = undefined
    console.log(c)
    console.log(d)
    
    // Const is a constant variable which value doesn't change.
    const author = "jaymin"
    // author = "deep" ->Throws an error
    console.log(author)
