const msg: string = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
const natoMessage = msg.replace(/Dash/g, "-").replace(/One/g, "1").replace(/Two/g, "2").replace(/Three/g, "3").replace(/Four/g, "4").replace(/Five/g, "5").replace(/Six/g, "6").replace(/Seven/g, "7").replace(/Eight/g, "8").replace(/Nine/g, "9").replace(/Zero/g, "0");

const messageParts: string[] = natoMessage.split(" ");
const decryptedMessage: string[] = []

for (const p in messageParts) {
    const firstLetter: string = messageParts[p][0];
    decryptedMessage.push(firstLetter);
}

console.log(decryptedMessage.join(""));
