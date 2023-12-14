syntax on
set termguicolors
set background=dark
colorscheme aurora
hi Normal guibg=NONE ctermbg=NONE
set number
set noerrorbells
set tabstop=2 softtabstop=2
se shiftwidth=2
set autoindent
set smartindent
set nowrap
"highlight CursorLine cterm=NONE ctermbg=NONE ctermfg=NONE guibg=NONE guifg=NONE
set cursorline
set clipboard=unnamedplus
"intall vim-gtk o vim-gnome
let s:clip = '/mnt/c/Windows/System32/clip.exe'  " default location
if executable(s:clip)
	augroup WSLYank
		autocmd!
		autocmd TextYankPost * call system('echo '.shellescape(join(v:event.regcontents, "\<CR>")).' | '.s:clip)
		augroup END
endif
call plug#begin('~/.vim/plugged')
" The default plugin directory will be as follows:
"   - Vim (Linux/macOS): '~/.vim/plugged'
"   - Vim (Windows): '~/vimfiles/plugged'
"   - Neovim (Linux/macOS/Windows): stdpath('data') . '/plugged'
" You can specify a custom plugin directory by passing it as the argument
"   - e.g. `call plug#begin('~/.vim/plugged')`
"   - Avoid using standard Vim directory names like 'plugin'
Plug 'rafalbromirski/vim-aurora'
Plug 'octol/vim-cpp-enhanced-highlight'
call plug#end()
nnoremap<F1> :!./%:r.out < in1 <CR>
nnoremap<F2> :!./%:r.out < in2 <CR>
nnoremap<F3> :!./%:r.out < in3 <CR>
nnoremap<F4> :!./%:r.out < in4 <CR>
nnoremap<F5> :w <bar> !g++ -DLOCAL -o %:r.out % -std=c++17<Enter>
nnoremap<F6> :%y+<CR>
nnoremap<F9> :!./%:r.out<Enter>


