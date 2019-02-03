build:
	Rscript -e 'rmarkdown::render_site("source")'
	open docs/index.html
.PHONY: build
spelling: 
	Rscript _spelling.R
all: 
	make build
	make spelling
