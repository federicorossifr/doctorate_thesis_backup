BUILD_DIR=build

all: compile clean

config:
	mkdir -p ${BUILD_DIR}

restart:
	rm -f ${BUILD_DIR}/main.pdf

compile: config restart
	pdflatex -output-directory ${BUILD_DIR} main
	bibtex ${BUILD_DIR}/main
	makeglossaries -d ${BUILD_DIR} main
	pdflatex -output-directory ${BUILD_DIR} main
	pdflatex -output-directory ${BUILD_DIR} main

clean: restart
	rm -rf ${BUILD_DIR}
