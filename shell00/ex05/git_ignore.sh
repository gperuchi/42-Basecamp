//OK

#!/bin/sh

git status --ignored --porcelain --untracked-files | grep '!!' | cut -c 4-