
    /*
    // There are 7 type of Datatype in javaSript
        // ->Primitive datatype
        1.undefied
        2.boolean
        3.number
        4.string
        5.bigint
        6.symbol
        7.null

        The short way to remember the datatype name is..
            NN BB SS U

        In c or c++ we have to declare the data type first and then set the value.
            like ...
                int a = 10;
                string str = "jaymin"
        
        In javaScript we don't want to declare the datatype.The javaScript automatically considered the datatype.Also the javaScript use (let , const and var) as a datatype.
            like..
                var name = "jaymin"
                let name = "deep"
                const author = "jayminDarji"
    */


    // let's take one example to find the type of any variable

    let a = null       // null
    // let a = 74         // number
    // let a = "jaymin"    // string
    // let a = Symbol("I am a very good man") // symbol
    // let a = BigInt("4545")    // bigInt
    // let a = true  // boolean
    // let a;             //undefined

    // console.log(typeof(a))


    //Non primitive datatype(object)

let item = {
    "jay" : true,
    "deep" : false,
    "subject" : 7,
    "course" : "BCA"
}

console.log(item["jay"])
console.log(item["deep"])
console.log(item["subject"])
console.log(item["course"])
