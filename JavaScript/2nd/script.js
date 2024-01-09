function palindrome()
{
    let x = document.getElementById("num1").value;
    let y;
    let b=0;
    let c,temp;

    document.getElementById("numx").innerHTML=x;
    temp=x;


    while (x>=1){
        c=x%10;
        x=parseInt(x/10);
        b=b*10+c;
    }
    if(b==temp)
    {
        document.getElementById("x").innerHTML = b;
    }
    else
    {
        document.getElementById("x").innerHTML="This number does not have a Palindrome";
    }

}