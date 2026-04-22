const readline = require("readline").createInterface({  
    input: process.stdin,   //input
    output: process.stdout  //output
});

readline.question("Enter value of a: ", (a) => // => callback { }->run code inside braces
{
    readline.question("Enter value of b: ", (b) =>  //nested ??because js is async,(non - blocking) hoti hai
    {

        a = Number(a);  //input comes in string
        b = Number(b);

        console.log("a =", a, "b =", b);
        console.log("Sum =", a + b);
        console.log("a * b = ",a*b);
        console.log("a % b = ",a%b);
        console.log("a - b = ",a-b);
        console.log("a ** b = ",a**b); //exponentiation  eg. 5^2

        readline.close(); //close the interface
    });
});



/* readline =  console se input/ouput handle krta hai
    require () = brings module

    (a) => {...} jb input mile tb kaam krna hai
    interface -> user aur program k beech connection 
*/