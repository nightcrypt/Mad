function answer()
{
    
    let amount_principle = parseInt(document.getElementById("principle").value);
    let cal_rate = parseInt(document.getElementById("rate").value);
    let cal_tme = parseInt(document.getElementById("time").value);
    let intrest;
    let total;


    intrest = parseInt((amount_principle*cal_rate*cal_tme)/100);
    total = amount_principle + intrest;
 

    document.getElementById("principle_1").innerHTML = amount_principle;
    document.getElementById("calInt").innerHTML = intrest;
    document.getElementById("Total").innerHTML = total;
    


}