function spamhi()
{
    let textbox=document.querySelector(".composer_rich_textarea");
    let sendbtn=document.querySelector("body > div.page_wrap > div.im_page_wrap.clearfix > div > div.im_history_col_wrap.noselect.im_history_loaded > div.im_history_selected_wrap > div > div.im_bottom_panel_wrap > div.im_send_panel_wrap.noselect > div > div > div > form > div.im_send_buttons_wrap.clearfix > button > span.im_submit_send_label.nocopy");
    textbox.innerHTML="Hi";
    sendbtn.click();
}

setInterval(spamhi,2000);
