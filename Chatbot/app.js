function talk() {
    var know = {
        "Who are you": "Hello,Sir I'm your ChatBot🤖",
        "How are you": "Good :)",
        "What can you do":"I'm under development but still I can answer few of your questions:)",
        "What can i do for you": "Learn frontend development>>Thank Me Later",
        "can i call you siri":"Ya!it sounds good🤩",
        "Hi siri":"Hey! What can I do for you ",
        "Who designed you":
            "These guys Adarsh,Ruchi and Shrada developed me using frontend tech stack",
        "Will you specify there work":"Adarsh:JS & Cloud Hosting,Shradha:Style,Ruchi:Structure and style",
        ok: "Thank You So Much ",
        Bye: "Okay! Will meet soon..",
    };
    var user = document.getElementById("userBox").value;
    document.getElementById("chatLog").innerHTML = user + "<br>";
    if (user in know) {
        document.getElementById("chatLog").innerHTML = know[user] + "<br>";
    } else {
        document.getElementById("chatLog").innerHTML =
            "Sorry,I didn't understand <br>";
    }
}

