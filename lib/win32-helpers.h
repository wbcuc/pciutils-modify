const char *win32_strerror(DWORD win32_error_id);
BOOL win32_is_non_nt_system(void);
BOOL win32_is_32bit_on_64bit_system(void);
BOOL win32_is_32bit_on_win8_64bit_system(void);
UINT win32_change_error_mode(UINT new_mode);
BOOL win32_have_privilege(LUID luid_privilege);
BOOL win32_enable_privilege(LUID luid_privilege, HANDLE *revert_token, BOOL *revert_only_privilege);
VOID win32_revert_privilege(LUID luid_privilege, HANDLE revert_token, BOOL revert_only_privilege);
BOOL win32_change_token(HANDLE new_token, HANDLE *old_token);
VOID win32_revert_to_token(HANDLE token);
HANDLE win32_find_and_open_process_for_query(LPCSTR exe_file);
HANDLE win32_open_process_token_with_rights(HANDLE process, DWORD rights);
BOOL win32_call_func_with_tcb_privilege(BOOL (*function)(LPVOID), LPVOID argument);