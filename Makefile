build:
	Rscript -e 'rmarkdown::render_site("source")'
all: 
	make build
