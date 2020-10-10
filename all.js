<!DOCTYPE html>
<head>
    <title>My file</title>
    <body>
        <p id="a">Old content</p>
        <button id="b">Click Here</button>
        <button id="c">Click by</button>
        <p id="d"></p>
        <button id="e">Click</button>
        <p id="f">Highlight</p>
        <button id="g">Enter me</button>
        <p id="h">Username:<input type="text" id="i"></p>
        <p id="j">Password:<input type="text" id="k"></p>
        <button id="l">Enter here</button>
        <script>
            alert("Hello Page")
            //Changing the content.
            document.getElementById("b").onclick=function()
            {
                document.getElementById("a").innerHTML="New Content";
            }
            //Appending the content.
            document.getElementById("c").onclick=function()
            {
                document.getElementById("a").innerHTML=document.getElementById("a").innerHTML + "Bye Bye";
            }
            //Creating data from scratch.
            document.getElementById("e").onclick=function()
            {
                document.getElementById("d").innerHTML="Content added";
            }
            //Manipulating content.
            document.getElementById("g").onclick=function() 
            {
                document.getElementById("f").style.color="green";
            }
            //Usage od If and else and variable concept.(login system)
            document.getElementById("l").onclick=function()
            {
                var m=document.getElementById("i").value;
                var n="amit";
                var o=document.getElementById("k").value;
                var p=123;
                if (m==n&&o==p)
                {
                    alert("Correct");
                }else
                {
                    alert("Re-enter");
                }
            }
        </script>
        
    </body>
</head>
