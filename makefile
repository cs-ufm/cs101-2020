deploy:
	git add .
	git commit -m "auto deploy"
	git push origin master
	mkdocs gh-deploy