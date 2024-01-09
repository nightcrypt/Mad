let noon = 12;
let evening = 18;
let partyTime;

let ShowCurrTime = function()
{
   
    let clock = document.getElementById('clock');

    let currTime = new Date();
   
    
    document.getElementById("clock").innerHTML=currTime;
    
    let hour  = currTime.getHours();
    let minute  = currTime.getMinutes();
    let second  = currTime.getSeconds();
    let merdians = "AM";


    if(hour >= noon)
    {
        merdians ="PM";
    }
    if(hour > noon)
    {
        hour= hour - 12;
    }

    if(minute<10)
    {
        minute = "0" + minute;
    }

    if(second < 10)
    {
        second = "0" + second;
    }

    let clockTime = hour + ":"+ minute + ":" + second + " "+ merdians+"!!";

    clock.innerText = clockTime;

    setTimeout(ShowCurrTime,1000);

};
ShowCurrTime();


let updateclock = function()
{
    let time = new Date().getHours() 
    let messageText;
    let timeEventjs = document.getElementById('timeEvent');
    let catImages = document.getElementById('catImages');
    let image = 'https://s3.amazonaws.com/media.skillcrush.com/skillcrush/wp-content/uploads/2016/08/normalTime.jpg';
    if (time < noon)
    {
        image = "https://pbs.twimg.com/profile_images/378800000532546226/dbe5f0727b69487016ffd67a6689e75a.jpeg";
        messageText = "Good morning!";
    }

    if( time > evening)
    {
        image = "https://upload.wikimedia.org/wikipedia/commons/8/8c/Cat_sleep.jpg";
        messageText = "Good evening!";
    }

    else
    {
      image = "https://s3.amazonaws.com/media.skillcrush.com/skillcrush/wp-content/uploads/2016/08/normalTime.jpg";
      messageText = "Good afternoon!";
    }

    timeEventjs.innerText = messageText;
    catImages.src = image;

    ShowCurrTime();
}

updateclock();

let oneSec = 1000;
setInterval(updateclock,oneSec);

let partyButton= document.getElementById("partyTimeBtn");

var partyEvent = function()
{
    if (partyTime < 0) 
    {
        partytime = new Date().getHours();
        partyTimeBtn.innerText = "Party Over!";
        partyTimeBtn.style.backgroundColor = "#0A8DAB";
    }

    else
    {
        partyTime = -1;
        partyTimeBtn.innerText = "Party Time!";
        partyTimeBtn.style.backgroundColor = "#222";
    }
    
};

partyButton.addEventListener("click", partyEvent);
partyEvent(); 