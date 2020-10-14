<!DOCTYPE html>
<html>
    <head>
        <title>My File</title>
        <style>
            #shape{
                border: 5 px solid black;
                height: 200px;
                width: 200px;
                border-radius: 50%;
                background-color: blue;
                display: none;
                position: relative;
            }
            #siz{
                font-size: 30px;
            }
        </style>
    </head>
    <body>
        <h1 id="siz">Test your reaction time!</h1>
        <h3 id="si">Click on the image below as fast as you can.</h3>
        <h4 id="ab">Your time</h4>
        <div id="shape"></div>
        <script>
            var start=new Date().getTime();
            function getRandomColor() {
                
                var letters = '0123456789ABCDEF'.split('');
    
                var color = '#';
    
                for (var i = 0; i < 6; i++ ) {
        
                    color += letters[Math.floor(Math.random() * 16)];
    
                }
    
                return color;

            }
            function delaydis()
            {
                var topp=Math.random()*400;
                var lef=Math.random()*600;
                
                document.getElementById("shape").style.top=topp +"px";
                document.getElementById("shape").style.left=lef+"px";
                document.getElementById("shape").style.display="block";
                document.getElementById("shape").style.backgroundColor=getRandomColor();
                start=new Date().getTime();

            }
            setTimeout(delaydis,1000)
            document.getElementById("shape").onclick=function()
            {
                document.getElementById("shape").style.display="none";
                var end=new Date().getTime();
                var dur=(end-start)/1000;
                document.getElementById("ab").innerHTML="Your time is" +" "+ dur;
                setTimeout(delaydis,1000)
            }
        </script>
    </body>
</html>
