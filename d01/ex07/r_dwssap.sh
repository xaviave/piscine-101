cat /etc/passwd | grep -v '#' | sed -e '2n;N;s/.*\n//' | rev | cut -d : -f 7 | sort -dr | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed "s/,/, /g" | sed "s/, $/./g"
