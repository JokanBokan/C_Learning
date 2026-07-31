# C Learning

Hello everyone,

this repo is basically a collection of small C projects that i wrote with comments explaining everything to the last detail, made for people that want to upgrade their knowledge of the C programming language.

Every project lives in its own folder and comes with a heavily commented `main.c`. In most of them i already implement some example functions so you can see how things work, and then i leave some functions as empty on purpose so you can practice by writing them yourself. If you get stuck, the example functions right above are usually a hint.

If you have any questions at all about the code or the comments, please feel free to ask, i'll try to explain as best as i can.

## Projects

| Folder | Topic | What it covers |
|--------|-------|-----------------|
| [`strings/`](./strings) | Strings | Since strings in C are very questionable and unsafe, this is a basic implementation of a safer string type (a `{data, size}` struct instead of relying on null-termination), with example functions plus some left empty for you to implement (`str_cut_left`, `str_cut_right`, `str_compare`, `str_find_char`, `str_char_exists`). |

## How to build

Each project is self contained, so just go into its folder and compile the `main.c`:

```bash
cd <project_folder>
gcc main.c -o main
./main
```

## Credits

Some of the ideas in here weren't mine originally, so credits go to the people i learned them from:
- Magicalbat: https://www.youtube.com/@Magicalbat
- Tsoding: https://www.youtube.com/@Tsoding

Huge thanks to them, they made detailed videos on this stuff, you should definitely check them out. Wherever i used something from them specifically, i credit it again inside the source file itself.

## TODO

- [ ] add a **linked list** project (singly + doubly, from scratch, explained step by step)
- [ ] add a **dynamic array / vector** project (growable array, explain `realloc` and why we grow it the way we do)
- [ ] add a **basic memory allocator** project (basically reimplementing `malloc`/`free` on a small scale, so people understand what's actually happening under the hood)
- [ ] add a **hash table** project (hashing, collisions, chaining vs open addressing)
- [ ] add a **file I/O** project (reading/writing files, buffered vs unbuffered)
- [ ] add a **basic shell** project (parsing commands, `fork`/`exec`/`wait`, how a shell actually works)
- [ ] add a **pointers & memory** project (pointer arithmetic, arrays vs pointers, the trap that got me when i was starting out)
- [ ] add a small README to each project folder with build instructions and what you're supposed to learn from it
- [ ] mark each project with a difficulty (beginner / intermediate / advanced) so people know where to start

## Questions / contributing

Got a question, found a bug, or think a comment could be clearer? Feel free to open an issue, i'm always down to improve this.

## License

Do whatever you want with this, use it, modify it, learn from it. That's the whole point.

Have a great day and i hope that this repo helped you out at least a little :)
- jokan July 30th, 2026
