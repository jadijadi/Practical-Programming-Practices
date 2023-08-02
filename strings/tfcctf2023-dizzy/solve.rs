fn get_flag<'a>(input: &'a str) -> String {
    let words = input.split(" ");

    // Parse the numbers
    //
    // and get the first item of the word as char
    let parsed_nums = words
        .into_iter()
        .map(|word| (word.chars().nth(0).unwrap(), word[1..].parse().unwrap()))
        .collect::<Vec<(char, usize)>>();

    // Calculate how much space we need
    let required_len = parsed_nums.iter().map(|p| p.1).max().unwrap() + 1;

    let mut answer = Vec::new();

    // Allocate enough space for answer
    // set the every item to zero
    answer.resize(required_len, '\0');

    for pn in parsed_nums {
        answer[pn.1] = pn.0;
    }

    // Collect the Vec of chars as String
    return answer.iter().collect::<String>();
}

fn main() {
    let input = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";
    let flag = get_flag(&input);

    println!("{}", flag);
}

