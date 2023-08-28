use std::collections::HashMap;

fn main() {
    println!("Hello, world!");

    let message = include_str!("message.txt");

    let words: Vec<&str> = message.split(' ').collect();

    let numbers = HashMap::from([
        ("Zero", '0'),
        ("One", '1'),
        ("Two", '2'),
        ("Three", '3'),
        ("Four", '4'),
        ("Five", '5'),
        ("Six", '6'),
        ("Seven", '7'),
        ("Eight", '8'),
        ("Nine", '9'),
    ]);

    for word in words.iter() {
        if numbers.contains_key(word) {
            print!("{:?}", numbers.get(word).unwrap());
        } else {
            print!("{}", word.chars().nth(0).unwrap());
        }
    }
    
}
