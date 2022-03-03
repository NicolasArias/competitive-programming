syntax on
set number
set noerrorbells
set noerrorbells visualbell t_vb=
autocmd GUIEnter * set visuabell t_vb =
set tabstop=2 softtabstop=2
set shiftwidth=2
set autoindent
set smartindent
set nowrap
set clipboard=unnamedplus
"intall vim-gtk o vim-gnome
"for windows
let s:clip = '/mnt/c/Windows/System32/clip.exe'  " default location
if executable(s:clip)
	augroup WSLYank
		autocmd!
		autocmd TextYankPost * call system('echo '.shellescape(join(v:event.regcontents, "\<CR>")).' | '.s:clip)
		augroup END
endif
nnoremap<F1> :!./%:r.out < in1 <CR>
nnoremap<F2> :!./%:r.out < in2 <CR>
nnoremap<F3> :!./%:r.out < in3 <CR>
nnoremap<F4> :!./%:r.out < in4 <CR>
nnoremap<F5> :w <bar> !g++ -DLOCAL -o %:r.out % -std=c++17<Enter>
nnoremap<F6> :%y+<CR>
nnoremap<F9> :!./%:r.out<Enter>

