build:
	Rscript -e 'rmarkdown::render_site("source")'
	open docs/index.html
.PHONY: build
all: 
	make build
