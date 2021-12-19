FILE *fp_in, *fp_out, *fp_err;
AllocConsole();
freopen_s(&fp_in, "CONIN$", "r", stdin);
freopen_s(&fp_out, "CONOUT$", "w", stdout);
freopen_s(&fp_err, "CONOUT$", "w", stdout);

// printf("%08X\n", 0x11223344);

if (fp_err) fclose(fp_err);
if (fp_out) fclose(fp_out);
if (fp_in) fclose(fp_in);
_fcloseall();
FreeConsole();