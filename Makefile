build:
	Rscript -e 'rmarkdown::render_site("source")'
	open docs/index.html
all: 
	make build
