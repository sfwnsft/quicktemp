function convertTemperature() {
  var temp = parseFloat(document.getElementById("temperature").value);
  var type = document.getElementById("conversionType").value;
  var result;

  if (isNaN(temp)) {
    document.getElementById("result").textContent =
      "Please enter a valid temperature!";
    return;
  }

  if (type === "c-to-f") {
    result = (temp * 9) / 5 + 32;
    document.getElementById("result").textContent =
      temp.toFixed(2) + "°C = " + result.toFixed(2) + "°F";
  } else if (type === "f-to-c") {
    result = ((temp - 32) * 5) / 9;
    document.getElementById("result").textContent =
      temp.toFixed(2) + "°F = " + result.toFixed(2) + "°C";
  } else if (type === "c-to-k") {
    result = temp + 273.15;
    document.getElementById("result").textContent =
      temp.toFixed(2) + "°C = " + result.toFixed(2) + " K";
  } else if (type === "k-to-c") {
    result = temp - 273.15;
    document.getElementById("result").textContent =
      temp.toFixed(2) + " K = " + result.toFixed(2) + "°C";
  } else if (type === "f-to-k") {
    result = ((temp - 32) * 5) / 9 + 273.15;
    document.getElementById("result").textContent =
      temp.toFixed(2) + "°F = " + result.toFixed(2) + " K";
  } else if (type === "k-to-f") {
    result = ((temp - 273.15) * 9) / 5 + 32;
    document.getElementById("result").textContent =
      temp.toFixed(2) + " K = " + result.toFixed(2) + "°F";
  }
}

document
  .getElementById("temperature")
  .addEventListener("keypress", function (e) {
    if (e.key === "Enter") {
      convertTemperature();
    }
  });
