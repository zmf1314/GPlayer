package com.gibbs.sample

import android.content.Context

class SettingsSPUtils {
    private object SPHolder {
        val INSTANCE = SettingsSPUtils()
    }

    private fun getString(context: Context, key: String?): String? {
        return getString(context, key, "")
    }

    private fun getString(context: Context, key: String?, defaultValue: String?): String? {
        val sf = context.getSharedPreferences(SP_FILE, Context.MODE_PRIVATE)
        return sf.getString(key, defaultValue)
    }

    private fun getCodecLayer(context: Context): String? {
        return getString(context, CODEC_SOURCE)
    }

    private fun getCodecType(context: Context): String? {
        return getString(context, CODEC_TYPE)
    }

    fun getGPlayerStyle(context: Context): String? {
        return getString(context, GPLAYER_STYLE, "external")
    }

    fun isDecodeSource(context: Context): Boolean {
        return getCodecLayer(context) == "1"
    }

    fun isMediaCodec(context: Context): Boolean {
        return getCodecType(context) == "2"
    }

    companion object {
        private const val SP_FILE = "com.gibbs.gplayer_preferences"
        const val CODEC_SOURCE = "codec_source"
        const val CODEC_TYPE = "codec_type"
        const val GPLAYER_STYLE = "gplayer_style"
        val instance: SettingsSPUtils
            get() = SPHolder.INSTANCE
    }
}