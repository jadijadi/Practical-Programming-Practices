use std::collections::HashSet;

fn has_conditions(mut i: u32) -> bool {
    let mut digits = HashSet::new();

    for _ in 0..3 {
        let digit = i % 10;
        digits.insert(digit.to_string());
        i /= 10;
    }
    !(digits.contains("0") || digits.len() != 2) 
}

fn main() {
    let mut count = 0;
    for i in 100..999 {
        if has_conditions(i) {
            count += 1;
        }
    }
    println!("{count}");
}
