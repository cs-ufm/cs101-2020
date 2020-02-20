deploy: git
	mkdocs gh-deploy

git:
	git add .
	git commit -m "auto deploy"
	git push origin master