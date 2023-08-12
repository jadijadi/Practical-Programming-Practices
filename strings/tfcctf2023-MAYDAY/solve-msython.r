string <- "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
words <- strsplit(string, " ")[[1]]
codes <- c("One"="1", "Two"="2", "Three"="3", "Four"="4","Five"="5","Six"="6","Seven"="7", "Eight"="8","Nine"="9", "Zero"='0', "Dash"='-')
result <- c()
for (word in words){
    if (word %in% names(codes)){
        result <- c(result, codes[word])
    } else {
        result <- c(result, substring(word,1,1))
    }
}
paste(result,collapse="")
