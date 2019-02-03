library(spelling)

path <- list.files(path="source", pattern = "\\.Rmd$", full.names=TRUE)

ignore <- readLines("WORDLIST")

spell_check_files(path,ignore)
