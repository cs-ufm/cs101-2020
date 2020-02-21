deploy: git
	@mkdocs gh-deploy

git:
	@git add . || true
	@git commit -m "auto deploy" || true
	@git push origin master || true

serve:
	@mkdocs serve
s: serve