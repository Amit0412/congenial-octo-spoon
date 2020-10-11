<!DOCTYPE html>
<html>
<body>

<p>Click the button to display a random number between 1 and 10.</p>

<button onclick="myFunction()">Try it</button>



<script>
function myFunction() {
  var x = Math.floor((Math.random() * 10) + 1);
  alert(x)
}
</script>

</body>
</html>
